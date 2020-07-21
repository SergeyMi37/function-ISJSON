ROUTINE ZZISJSON [Type=INC]
ZZISJSON(jsn)  ; check JSON string
    new ok,er
    try {do Do^ZPretty(.jsn)  set ok=1} 
    catch er {set ok=0 }   
    if ok   ;set $TEST
    quit ok
