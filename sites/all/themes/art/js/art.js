/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {


/*********   number of image at gallery  *******/

$artimg=$(".view-arts-galleries .view-header").html();
if ($artimg==1){
  $(".view-arts-galleries").addClass("one-img");
}
else if ($artimg==2){
  $(".view-arts-galleries").addClass("two-img");
}

$exhimg=$(".view-exhibition-gallery .view-header").html();
if ($exhimg==1){
  $("#block-views-exhibition-gallery-block").addClass("ex-one-img");
  $("#block-views-exhibition-gallery-block-2").addClass("ex-one-img");
}
else if ($exhimg==2){
  $("#block-views-exhibition-gallery-block").addClass("ex-two-img");
  $("#block-views-exhibition-gallery-block-2").addClass("ex-two-img");
}


  $height = $(window).height();
  $width = ($(window).width()-1310)/2+240;
  $simplewidth = $(window).width();
  $heightsquare = $(window).height()+200;

$(window).resize(function() {
  $height = $(window).height();
  $width = ($(window).width()-1310)/2+240;
  $simplewidth = $(window).width();
  $heightsquare = $(window).height()+200;
      if ($simplewidth < 768){
      $(".i18n-en #triangle-topleft").css("border-top-width", $height);
      $(".i18n-en #triangle-topleft").css("border-bottom-width", "0");
      $(".i18n-he #triangle-topleft").css("border-bottom-width", $height);
      $(".i18n-he #triangle-topleft").css("border-top-width", "0");
    }
    else{
      $("#triangle-topleft").css("border-bottom-width", $height);
      $("#triangle-topleft").css("border-top-width", "0");
    }
});

$(document).ready(function(){       
      $scroll_pos = 0;
      $(document).scroll(function() { 
        $scroll_pos = $(this).scrollTop();
        if($scroll_pos > 20) {
            $("body").addClass('scroll');
        }
        else {
            $("body").removeClass('scroll');
        }
      });
});

if ($("div").hasClass("view-the-gallery")) {
   $i = 1;
   $(".view-the-gallery .views-row").each(function(){
     $class = "place"+$i++;
     $(this).addClass($class); 
     if ($i>6) { $i=1;}
    });
};

if ($("div").hasClass("view-arts")) {
   $art = 1;
   $(".view-arts .views-row").each(function(){
     $class = "place"+$art++;
     $(this).addClass($class); 
     if ($art>4) { $art=1;}
    });
};

$("#block-system-main-menu").addClass("hide");

$("#main").click(function(){
  if ($("body").hasClass("display-menu")){
    $("#square").addClass("hide").removeClass("display");
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#block-system-main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
    $("#navigation").addClass("close-menu");
  }
});

$("#main").click(function(){
  if ($("body").hasClass("display-social")){
    $("body").removeClass("display-social");
    $("#share-mobile").addClass("hide");
    $(".share-triangle").addClass("hide");
  }
});

$(".region-top").click(function(){
  if ($("body").hasClass("display-menu")){
    $("#square").addClass("hide").removeClass("display");
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#block-system-main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
    $("#navigation").addClass("close-menu");
  }
});

$(".region-top").click(function(){
  if ($("body").hasClass("display-social")){
    $("body").removeClass("display-social");
    $("#share-mobile").addClass("hide");
    $(".share-triangle").addClass("hide");
  }
});

$(".menu-button").click(function(){
  if ($("body").hasClass("display-menu")){
    $("#square").addClass("hide").removeClass("display");
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#block-system-main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
    $("#navigation").addClass("close-menu");
  }
  else {
    $("#triangle-topleft").addClass("display").removeClass("hide");
    $("#square").addClass("display").removeClass("hide");
    $("#block-system-main-menu").addClass("display").removeClass("hide");
    $("body").addClass("display-menu");
    $(".display-menu #block-system-main-menu").css("height", $height); 
    $(".display-menu #square").css("height", $heightsquare); 
    if ($simplewidth < 768){
      $(".i18n-en #triangle-topleft").css("border-top-width", $heightsquare);
      $(".i18n-en #triangle-topleft").css("border-bottom-width", "0");
      $(".i18n-he #triangle-topleft").css("border-bottom-width", $heightsquare);
      $(".i18n-he #triangle-topleft").css("border-top-width", "0");
    }
    else{
      $("#triangle-topleft").css("border-bottom-width", $heightsquare);
      $("#triangle-topleft").css("border-top-width", "0");
    }
    $(".i18n-he #triangle-topleft").css("right", $width);  
    $(".i18n-en #triangle-topleft").css("left", $width);  
    $(".display-menu #square").css("width", $width);
    $("#navigation").removeClass("close-menu");
    $("body").removeClass("display-social");
    $("#share-mobile").addClass("hide");
    $(".share-triangle").addClass("hide");
  }
});

$(".share-triangle").css("border-top-width", $heightsquare);
$("#share-mobile").css("height", $heightsquare); 


$(".social-button").click(function(){
  if ($("body").hasClass("display-social")){
    $("body").removeClass("display-social");
    $("#share-mobile").addClass("hide");
    $(".share-triangle").addClass("hide");
  }
  else {
    $("body").addClass("display-social");
    $("#share-mobile").removeClass("hide");
    $(".share-triangle").removeClass("hide");
    $("#square").addClass("hide").removeClass("display");
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#block-system-main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
    $("#navigation").addClass("close-menu");
  }
});

$("#block-search-form .form-type-textfield label").removeClass("element-invisible");

if ($("body").hasClass("node-type-exhibition")){

    $(".view-exhibition-gallery .grid").click(function(){
      $("#block-views-exhibition-gallery-block .view").addClass("display").removeClass("hide");
      $("#block-views-exhibition-gallery-block-2 .view").addClass("hide").removeClass("display");
    });

    $(".view-exhibition-gallery .one").click(function(){
      $("#block-views-exhibition-gallery-block-2 .view").addClass("display").removeClass("hide");
      $("#block-views-exhibition-gallery-block .view").addClass("hide").removeClass("display");
    });
}

if ($("body").hasClass("node-type-art")){

    $(".view-arts-galleries .grid").click(function(){
      $("#block-views-arts-galleries-block-2 .view").addClass("display").removeClass("hide");
      $("#block-views-arts-galleries-block .view").addClass("hide").removeClass("display");
    });

    $(".view-arts-galleries .one").click(function(){
      $("#block-views-arts-galleries-block .view").addClass("display").removeClass("hide");
      $("#block-views-arts-galleries-block-2 .view").addClass("hide").removeClass("display");
    });
}



/********  to top - mobile  ************/
  $('.top-button').click(function(){
    if ($height < 473){
      $("html, body").animate({
            scrollTop: 0
        }, 600);
    return false;
  }
  });

  $('.menu-button').click(function(){
      if ($("body").hasClass("display-menu")){
        if ($height < 473){
          $("html, body").animate({
                scrollTop: 0
            }, 600);
        return false;
      }
    }
  });


  $('.social-button').click(function(){
    if ($("body").hasClass("display-social")){
      if ($height < 473){
        $("html, body").animate({
              scrollTop: 0
          }, 600);
      return false;
      }
    }
  });

/********  art at the campus  ************/


$("#edit-sort-order").val("ASC");



  }
};


})(jQuery, Drupal, this, this.document);
