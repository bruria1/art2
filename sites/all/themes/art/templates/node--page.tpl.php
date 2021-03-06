<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>

<?php if ($unpublished): ?>
   <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
<?php endif; ?>

<?php if ($node->nid != "2619") { ?>
  <div id="block-views-exhibition-gallery-block" class="block">
      <?php
      $my_block = module_invoke('views', 'block_view', 'exhibition_gallery-block');
      print render($my_block['content']);?>
  </div> 
    <div id="block-views-exhibition-gallery-block-2" class="block">
      <?php
      $my_block = module_invoke('views', 'block_view', 'exhibition_gallery-block_2');
      print render($my_block['content']);?>
  </div> 

<?php } ?>

<div id="wrapper-title">
    <div class="title">
     <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
     <?php if(isset($node->field_sub_title['und'][0]['value'])) { ?>
        <div class="sub-title"> 
           <?php print $node->field_sub_title['und'][0]['value']; ?>
        </div>
   <?php }?>
 </div>
</div>

<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_sub_title']);
    print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
