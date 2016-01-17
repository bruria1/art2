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
   
   jQuery('#' + galId + ' .view-content').on('click', 'img', function() {
    for (var iter=0; iter < imgList.length; iter++){
      if (imgList[iter].src == this.src) {
        self.change(iter);
        break;
      }
    }
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
      jQuery('#art_overlay').addClass('throbber');
      jQuery("#art_overlay img").load(function(ev) {
        jQuery('#art_overlay').removeClass('throbber');
      });
      jQuery("#art_overlay").css("display","block");
      jQuery("#art_overlay .cur_i").html((imgList.index(this)+1));
      jQuery("#art_overlay .cur_total").html(imgList.length);
   }
} 
