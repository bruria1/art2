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


<div id="wrapper-title">
  <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
</div>

<?php if ($node->nid != "2619") { ?>
  <div id="block-views-exhibition-gallery-block" class="block">
      <?php
      $my_block = module_invoke('views', 'block_view', 'exhibition_gallery-block');
      print render($my_block['content']);?>
  </div> 

<?php } ?>
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
    print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
