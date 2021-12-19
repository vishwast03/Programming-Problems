const isLeap = (year) => {
    if((year % 100 === 0 && year % 400 === 0) || year % 4 === 0)
	    return true;
    else
        return false;
}