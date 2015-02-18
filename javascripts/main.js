$('#header_wrap a.btn').on('click', function(e){
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
    btn = '<iframe width="640" height="390" style="width:100%; height:100vh;" src="https://www.youtube.com/embed/dLLNKpJrHro" frameborder="0" allowfullscreen></iframe>'
    $('body').append(btn);
});