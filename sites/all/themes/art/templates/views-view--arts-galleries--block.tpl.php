<div id='ovr1' class='overlay' onclick='closeOvr()'>
  <div class='ovr_inner'>
 <!--   <span class='close_btn'>close</span> -->
    <img />
  </div>
</div>
<script>
  function closeOvr(){
    jQuery("#ovr1").css("display","none");
  }
  $("#ovr1").click(function(){
  });
</script>
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
  jQuery(".views-field-field-art-gallery img").click(function(){      
      jQuery("#ovr1 img").attr("src" , this.src.replace(/styles.+?public\//g,""));      
      jQuery("#ovr1").css("display","block");
  });
  
  jQuery(function(){    
    jQuery('.i18n-he .view-display-id-block .owl-carousel').owlCarousel({
      rtl:true,
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
});

  jQuery(function(){    
    jQuery('.i18n-en .view-display-id-block .owl-carousel').owlCarousel({
      rtl:false,
      loop:false,
      margin:10,
      nav:true,
      responsive:{
        0:{
          items:1
        }
      }
    }); 
});
</script>

