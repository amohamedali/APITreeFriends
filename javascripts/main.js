$('#header_wrap a.btn').on('click', function(e){
    e.preventDefault();
    var target = $($(this).attr('href'));
    $('html, body').stop().animate({
       scrollTop: target.offset().top
    }, 1000);
});

$('#navigation-bar a').on('click', function(e){
    e.preventDefault();
    var target = $($(this).attr('href'));
    $('html, body').stop().animate({
       scrollTop: target.offset().top
    }, 1000);
});

$("#navbar-brand").on('click', function(e){
    e.preventDefault();
    var target = $($(this).attr('href'));
    $('html, body').stop().animate({
       scrollTop: 0
    }, 1000);
});

cheet('↑ ↑ ↓ ↓ ← → ← → b a', function () {
    $('body').empty();
    btn = '<iframe src="http://docs.google.com/gview?url=http://amohamedali.github.io/APITreeFriends/images/rpzV032.pdf&embedded=true" style="width:100%; height:100vh;" frameborder="0"></iframe>'
    $('body').append(btn);
});