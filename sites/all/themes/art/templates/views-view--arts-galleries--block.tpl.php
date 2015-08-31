<div id='ovr_art_block0' class='overlay'> 
  <div class='ovr_inner'>   
 <!--   <span class='cur_i'>0</span> Of <span class='cur_total'>0</span> -->
 <!--   <span class='close_btn'>close</span> -->
    <img />
    <span class='next_i'>Next</span>
    <span class='prev_i'>Prev</span>
  </div>
</div>

<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="owl-carousel view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
<script>
/*** overlay ***/
  function OverLayHandler(OvrLayId , galClass){
   var OvrId =OvrLayId;
   var self = this;
   this.cur_i = 0;
   var imgList = jQuery(".view-id-arts_galleries.view-display-id-block .views-field-field-art-gallery img");  
   jQuery("."+galClass+" img").click(function(){    
    var i = imgList.index(this);        
    self.change(i); 
   });
   jQuery("#"+OvrLayId+" .next_i").click(function(e){ 
    e.stopPropagation(); 
    if(imgList.length>(self.cur_i+1)){
      console.log("next",self.cur_i);
      self.change(++self.cur_i); 
    }
   });
   jQuery("#"+OvrLayId+" .prev_i").click(function(e){ 
    e.stopPropagation();  
    if(self.cur_i>0){       
      console.log("prev",self.cur_i);   
      self.change(--self.cur_i); 
    }
   });
   jQuery("#"+OvrLayId).click(function(){
     jQuery(this).css("display","none");
   });
   this.next = function(){
      this.change(i++);
   }
   this.change =function(i){       
      this.cur_i = i; 
      var img = imgList[i];        
      jQuery("#"+OvrId+" img").attr("src" , img.src.replace(/styles.+?public\//g,""));    
      jQuery("#"+OvrId+"").css("display","block");
      jQuery("#"+OvrId+" .cur_i").html((imgList.index(this)+1));
      jQuery("#"+OvrId+" .cur_total").html(imgList.length);
   }
  }     
  
 var ovrLay = new OverLayHandler("ovr_art_block0","views-field-field-art-gallery");
 /*** end overlay ***/
  var owlBlock = jQuery('.i18n-he .view-display-id-block .owl-carousel ,'+
            '.i18n-en .view-display-id-block .owl-carousel');
        
  jQuery(function(){   
    owlBlock.each(function(i,n){
      var isRtl = jQuery(n).parents("body").hasClass("i18n-he");
      jQuery(n).owlCarousel({
        rtl:isRtl,
        loop:false,
        margin:10,
        nav:true,
        dots: true,
        responsive:{
        0:{
          items:1
        }
        }
      }); 
      jQuery(".view-display-id-block .owl-controls .owl-nav").addClass("first");
    });
    
  });  
  owlBlock.on('changed.owl.carousel', owlClick);

function owlClick(event){
  var nav = jQuery(".view-display-id-block .owl-controls .owl-nav");
  nav.removeClass("first last");
  if(event.item.index==0){
    nav.addClass("first");
  }
  if(event.item.count == (event.item.index+1)){
    nav.addClass("last");
  }
}
</script>

