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


function InitializeSelect(elem) {
    $("#" + elem).each(function () {
        var val = $(".select").children("option:selected").text();
        $(".select").next(".selecttext").text(val);
        $(".select").change(function () {
            var val = $(".select").children("option:selected").text();
            $(".select").next(".selecttext").text(val);
        });
        var selectId = $(".select").attr('id');
        if (selectId !== undefined) {
            var linkClass = selectId;
        }
        if (linkClass) {
            $(".select").parent('.selectbox').addClass(linkClass);
        }
    });
}

$(document).ready(function(){
    InitializeSelect('mySelect');
});

/*********   scroll  *******/

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
        if($scroll_pos > 330) {
            $("body").addClass('scroll-500');
        }
        else {
            $("body").removeClass('scroll-500');
        }
      });
});

/*********   lang switcher  *******/


$(".i18n-he #block-lang-dropdown-language option:last").html("Heb");
$(".i18n-he #block-lang-dropdown-language option:first").html("Eng");
$(".i18n-en #block-lang-dropdown-language option:first").html("אנגלית");

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
  $simplewidth = $(window).width();
  $heightsquare = $(window).height()+200;

$(window).resize(function() {
  $height = $(window).height();
  $simplewidth = $(window).width();
  $heightsquare = $(window).height()+200;
  $(".display-menu #square").css("height", $heightsquare); 
  $(".overlay .ovr_inner").css("height", $height);  
    if ($simplewidth < 768){
      $OverLayHandler(".i18n-en #triangle-topleft").css("border-top-width", $height);
      $(".i18n-en #triangle-topleft").css("border-bottom-width", "0");
      $(".i18n-he #triangle-topleft").css("border-bottom-width", $height);
      $(".i18n-he #triangle-topleft").css("border-top-width", "0");
    }
    else{
      $("#triangle-topleft").css("border-bottom-width", $height);
      $("#triangle-topleft").css("border-top-width", "0");
    }
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

//$("#main").click(function(){
//  if ($("body").hasClass("display-social")){
//    $("body").removeClass("display-social");
//    $("#share-mobile").addClass("hide");
//    $(".share-triangle").addClass("hide");
//  }
//});

$(".region-top").click(function(){
  if ($("body").hasClass("display-menu")){
    $("#square").addClass("hide").removeClass("display");
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#block-system-main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
    $("#navigation").addClass("close-menu");
  }
});

//$(".region-top").click(function(){
//  if ($("body").hasClass("display-social")){
//   $("body").removeClass("display-social");
//    $("#share-mobile").addClass("hide");
//    $(".share-triangle").addClass("hide");
//  }
//});

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
    $("#navigation").removeClass("close-menu");
    $("body").removeClass("display-social");
//    $("#share-mobile").addClass("hide");
//    $(".share-triangle").addClass("hide");
  }
});

$(".element-focusable").click(function(){
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
    $("#navigation").removeClass("close-menu");
    $("body").removeClass("display-social");
//    $("#share-mobile").addClass("hide");
//    $(".share-triangle").addClass("hide");
  }
});

//$(".share-triangle").css("border-top-width", $heightsquare);
//$("#share-mobile").css("height", $heightsquare); 


//$(".social-button").click(function(){
//  if ($("body").hasClass("display-social")){
//    $("body").removeClass("display-social");
//    $("#share-mobile").addClass("hide");
//    $(".share-triangle").addClass("hide");
//  }
//  else {
//    $("body").addClass("display-social");
//    $("#share-mobile").removeClass("hide");
//    $(".share-triangle").removeClass("hide");
//    $("#square").addClass("hide").removeClass("display");
//    $("#triangle-topleft").addClass("hide").removeClass("display");
//  $("#block-system-main-menu").addClass("hide").removeClass("display");
//    $("body").removeClass("display-menu");
//    $("#navigation").addClass("close-menu");
//  }
//});

$("#block-search-form .form-type-textfield label").removeClass("element-invisible");

if (($("body").hasClass("node-type-exhibition")) || ($("body").hasClass("node-type-page"))){
    $(".view-exhibition-gallery .grid").click(function(){
      $("#block-views-exhibition-gallery-block .view").addClass("display").removeClass("hide");
      $("#block-views-exhibition-gallery-block-2 .view").addClass("hide").removeClass("display");
    });

    $(".view-exhibition-gallery .one").click(function(){
      $("#block-views-exhibition-gallery-block-2 .view").addClass("display").removeClass("hide");
      $("#block-views-exhibition-gallery-block .view").addClass("hide").removeClass("display");
    });
}

if (($("body").hasClass("page-node-2619")) || ($("body").hasClass("page-node-2625"))){
    $(".view-now-exhibition .grid").click(function(){
      $("#block-views-now-exhibition-block-2 .view").addClass("display").removeClass("hide");
      $("#block-views-now-exhibition-block-1 .view").addClass("hide").removeClass("display");
    });

    $(".view-now-exhibition .one").click(function(){
      $("#block-views-now-exhibition-block-1 .view").addClass("display").removeClass("hide");
      $("#block-views-now-exhibition-block-2 .view").addClass("hide").removeClass("display");
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





/********  text resize  ************/

$('#text_resize_reset').addClass("active");

if ($('#main').css('font-size') > '18px'){
    $('#text_resize_increase').addClass("active");
    $('#text_resize_decrease').removeClass("active");
    $('#text_resize_reset').removeClass("active");
}

if ($('#main').css('font-size') < '18px'){
    $('#text_resize_increase').removeClass("active");
    $('#text_resize_decrease').addClass("active");
    $('#text_resize_reset').removeClass("active");
}

$('.block-text-resize .changer').click(function(){
  if ($('#main').css('font-size') < '18px'){
    $('#text_resize_increase').removeClass("active");
    $('#text_resize_decrease').addClass("active");
    $('#text_resize_reset').removeClass("active");
  }
  else if ($('#main').css('font-size') > '18px'){
      $('#text_resize_increase').addClass("active");
      $('#text_resize_decrease').removeClass("active");
      $('#text_resize_reset').removeClass("active");
  }
  else{
      $('#text_resize_increase').removeClass("active");
      $('#text_resize_decrease').removeClass("active");
      $('#text_resize_reset').addClass("active");
  }
});

/********  art and exhibition overlay  ************/

$(".overlay .ovr_inner").css("height", $height); 
$(".overlay").click(function(){
    jQuery(".overlay").css("display","none");
    jQuery(".overlay img").attr("src" , "");      
  });

  }
};
})(jQuery, Drupal, this, this.document);
/*** 
 * add classes to owl 
 ****/

function owlClick(event){
  var nav = jQuery(event.target).find(".owl-nav");
  gal_items = 1;
  if(jQuery(event.target).hasClass("owl_3_items")){
  gal_items = 3;
  }
  nav.removeClass("first last");
  if(event.item.index==0){
    nav.addClass("first");
  }
  if(event.item.count == (event.item.index+gal_items)){
    nav.addClass("last");
  }
}

/*** overlay ***/

function OverLayHandler(galId){ 
   var self = this;
   this.cur_i = 0;   
   var imgList = jQuery("#"+galId+" .views-field img");  
   jQuery("#"+galId+" .views-field img").click(function(){    
    var i = imgList.index(this);        
    self.change(i); 
   });
   jQuery("#art_overlay .next_i").click(function(e){ 
    e.stopPropagation(); 
    if(imgList.length>(self.cur_i+1)){
      console.log("next",self.cur_i);
      self.change(++self.cur_i); 
    }
   });
   jQuery("#art_overlay .prev_i").click(function(e){ 
    e.stopPropagation();  
    if(self.cur_i>0){       
      console.log("prev",self.cur_i);   
      self.change(--self.cur_i); 
    }
   });
   jQuery("#art_overlay").click(function(){
     jQuery(this).css("display","none");
   });
   this.next = function(){
      this.change(i++);
   }
   this.change =function(i){       
      this.cur_i = i; 
      if(this.cur_i === 0){
      jQuery("#art_overlay .prev_i").addClass("first");
    }
    else {
       jQuery("#art_overlay .prev_i").removeClass("first");
    }
     if(this.cur_i+1 >= imgList.length){
      jQuery("#art_overlay .next_i").addClass("last");
    }
    else {
       jQuery("#art_overlay .next_i").removeClass("last");
    }
      var img = imgList[i];      
      var fileName = img.src.replace(/styles.+?public\//g,"");
      jQuery("#art_overlay img").attr("src" ,Drupal.settings.basePath+"art_img/"+fileName.match(/files\/(.*)\?/)[1]);    
      jQuery("#art_overlay").css("display","block");
      jQuery("#art_overlay .cur_i").html((imgList.index(this)+1));
      jQuery("#art_overlay .cur_total").html(imgList.length);
   }
}  
