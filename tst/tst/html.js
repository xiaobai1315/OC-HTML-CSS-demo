window.onload = function(){
//    alert(0);
    var img = document.getElementsByTagName("img");
    img[0].onclick = function(){
        window.location.href = "hj:///imageClick";
    }
    
    img[0].ondblclick = function(){
        window.location.href = "hj:///imageDoubleClick";
    }
}
