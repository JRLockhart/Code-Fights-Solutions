//Given a year, return the century it is in. The first century spans 
//from the year 1 up to and including the year 100, the second - from the 
//year 101 up to and including the year 200, etc.

int centuryFromYear(int year) {
    
    int century = (year/100);
    
    int remainder = (year%100);
        
       if (remainder > 0){
           return century + 1;
       }else{
           return century;
       }

}