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

