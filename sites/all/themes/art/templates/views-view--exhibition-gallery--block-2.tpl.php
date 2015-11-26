<?=_print_one_overlay();?>
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
 var ovrLay = new OverLayHandler("block-views-exhibition-gallery-block-2");

 var owlBlock = jQuery('.i18n-he .view-display-id-block_2 .owl-carousel ,'+
            '.i18n-en .view-display-id-block_2 .owl-carousel');
        
  jQuery(function(){   
    owlBlock.each(function(i,n){
      var isRtl = jQuery(n).parents("body").hasClass("i18n-he");
      var options = {
        rtl:isRtl,
        margin:10,
        nav:true,
        dots: true,
        responsiveClass: true,
        responsive:{
          0:{
            items:1
          }
        }
      };
      if (jQuery(n).find('.views-field').length > 1) {
        options.loop = true;
      }
      jQuery(n).owlCarousel(options); 
      jQuery(".view-display-id-block_2 .owl-controls .owl-nav").addClass("first");
    });
    
  });  
  owlBlock.on('changed.owl.carousel', owlClick);
</script>


