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

  $height = $(window).height()-118;
  $width = ($(window).width()-1200)/2+276;
  $jcaruselwidth = $(window).width()*0.94/3;

$(window).resize(function() {
  $height = $(window).height()-118;
  $width = ($(window).width()-1200)/2+276;
  $jcaruselwidth = $(window).width()*0.94/3;
});

if ($("body").hasClass("page-node-2598")) {
   $i = 1;
   $(".views-row").each(function(){
     $class = "place"+$i++;
     $(this).addClass($class); 
     if ($i>6) { $i=1;}
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
    $(".display-menu #square").css("height", $height); 
    $("#triangle-topleft").css("border-bottom-width", $height);
    $(".i18n-he #triangle-topleft").css("right", $width);  
    $(".i18n-en #triangle-topleft").css("left", $width);  
    $(".display-menu #square").css("width", $width);
    $("#navigation").removeClass("close-menu");
    $("body").removeClass("display-social");
    $("#share-mobile").addClass("hide");
    $(".share-triangle").addClass("hide");
  }
});

$(".share-triangle").css("border-top-width", $height);
$("#share-mobile").css("height", $height); 


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
      $("html, body").animate({
            scrollTop: 0
        }, 600);
    return false;
  });


  }
};


})(jQuery, Drupal, this, this.document);
