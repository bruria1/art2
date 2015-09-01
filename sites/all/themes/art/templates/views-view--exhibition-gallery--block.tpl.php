<div id='ovr1' class='overlay' onclick='closeOvr()'>
  <div class='ovr_inner'>	  
<<<<<<< HEAD
<div id='ovr_art_block0' class='overlay'> 
  <div class='ovr_inner'>   
=======
>>>>>>> c9ebfe6ab37b43963c6f57d00a0adb33364a8fd5
 <!--   <span class='cur_i'>0</span> Of <span class='cur_total'>0</span> -->
 <!--   <span class='close_btn'>close</span> -->
    <img />
    <span class='next_i'></span>
    <span class='prev_i'></span>
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
    jQuery(".views-field-field-exh-gallery-top img").click(function(){      
      jQuery("#ovr1 img").attr("src" , this.src.replace(/styles.+?public\//g,""));      
      jQuery("#ovr1").css("display","block");
    });

	jQuery(function(){		
		jQuery('.i18n-he .view-display-id-block .owl-carousel').owlCarousel({
			rtl:true,
			loop:false,
			margin:10,
			nav:true,
			responsive:{
				0:{
					items:3
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
          items:3
        }
      }
    }); 
});
</script>

