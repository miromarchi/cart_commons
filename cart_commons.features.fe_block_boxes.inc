<?php
/**
 * @file
 * cart_commons.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cart_commons_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'cart_block_footer';
  $fe_block_boxes->body = '<div class="container">
	<div class="row clearfix">
		<div class="col-md-12 column">
			<div class="row clearfix">
				<div class="col-md-4 column text-center">
					<h3>
						Partners
					</h3>
					<p>Cuban Art Worldwide is made possible thanks to:</p>
					<div class="tb-rl">{</div>
					<p>
					    <img class="img-responsive pull-left" src="<?php print base_path() . \'sites/default/files/structure/arteverona2014.jpg\';?>" /><img class="img-responsive pull-left" src="<?php print base_path() . \'sites/default/files/structure/artelibro.jpg\'?>" />
				  </p>
				</div>
				<div class="col-md-4 column text-center">
					<h3>
						About
					</h3>
					<p>...</p>
					<div class="tb-rl">{</div>
					<p>
					    <a class="btn btn-default btn-margin" href="/about#about>">About the project</a>
					    <a class="btn btn-default btn-margin" href="/about#team">Team / who we are</a>
					    <a class="btn btn-default btn-margin" href="/about#participate">How to participate</a>
				    </p>
				</div>
				<div class="col-md-4 column text-center">
					<h3>
						Social
					</h3>
					<p>...</p>
					<div class="tb-rl">{</div>
                    <p>
                        <a class="btn btn-default btn-margin" href="rss.xml" target="_blank" title="Exhibitions RSS Feed - Cuban Art Worldwide"><i class="fa fa-rss-square fa-lg"></i> Exhibitions</a>
                    </p>
				</div><!--col-md-4-->
			</div><!--row-->
		</div><!--col-md-12-->
	</div><!--row-->
</div><!--container-->';

  $export['cart_block_footer'] = $fe_block_boxes;

  return $export;
}
