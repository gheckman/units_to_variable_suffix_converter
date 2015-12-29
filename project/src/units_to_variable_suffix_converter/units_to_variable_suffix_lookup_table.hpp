#pragma once
#include "systems.hpp"

static const std::unordered_multimap<std::string,std::string> UNITS_TO_VARIABLE_SUFFIX_LOOKUP_TABLE

  //length
  ,{"nanometers","nm"}
  ,{"micrometre","micron"}
  ,{"millimeters","mm"}
  ,{"centimeters","cm"}
  ,{"decimeters","dm"}
  ,{"meters","m"}
  ,{"dekameters","dam"}
  ,{"hectometers","hm"}
  ,{"kilometers","km"}
  ,{"inches","in"}
  ,{"feet","ft"}
  ,{"yards","yd"}
  ,{"miles","mi"}
  ,{"nautical miles","nmi"}
  ,{"nautical league","n_leag"}
  ,{"fathom","fath"}
  ,{"cable length","cbl"}
  
   //speed (length / time)
  ,{"feet / minute","ft_m"}
  ,{"revolutions / minute","rpm"}
  ,{"meters / second","mps"}
  ,{"knots","kts"}
  ,{"mach","mach"}
  
    //acceleration
    ,{"degrees / second^2","degpss"} //<- prob not acceleration
    ,{"meters / second^2","mpss"}
    
    //force
    ,{"pounds / minute","ppm"}
    ,{"pounds / hour","pph"}
  
  //area
  //...
  
  //volume
  //...
  
  //currency
  //...
  
  //weight
  ,{"milligrams","mg"}
  ,{"centigrams","cg"}
  ,{"decigrams","dg"}
  ,{"grams","g"}
  ,{"dekagrams","dekg"}
  ,{"hectograms","hecg"}
  ,{"kilograms","kg"}
  ,{"metric tons","mtn"}
  ,{"ounces","oz"}
  ,{"pounds","lbs"}
  ,{"tons","tn"}
  
  //time
  ,{"yoctoseconds","ys"}
  ,{"zeptoseconds","zs"}
  ,{"attoseconds","as"}
  ,{"femtoseconds","fs"}
  ,{"picoseconds","ps"}
  ,{"nanoseconds","ns"}
  ,{"shakes","shakes"}
  ,{"microseconds","us"}
  ,{"milliseconds","ms"}
  ,{"centiseconds","cs"}
  ,{"deciseconds","ds"}
  ,{"seconds","s"}
  ,{"decaseconds","decs"}
  ,{"minutes","min"}
  ,{"hectoseconds","hecs"}
  ,{"hours","hrs"}
  ,{"days","d"}
  ,{"weeks","w"}
  ,{"megaseconds","megas"}
  ,{"fortnights","frt_nght"}
  ,{"lunar months","lun_mon"}
  ,{"years","yrs"}
  ,{"decades","decs"}
  ,{"centuries","cents"}
  ,{"millennium","millen"}
  ,{"eons","eons"}
  
  //temperature
  ,{"degree farenheit","degf"}
  ,{"degree celsius","degc"}
  
  //angles
  ,{"degrees","deg"}
  ,{"degrees / second","degps"}
  
  //torque
  ,{"newton meters","Nm"}
  
  //power
  ,{"horse power","hp"}
  
  //pressure
  ,{"inches of mercury","inHG"}
  ,{"pascal","pa"}
  ,{"pounds / square inch","psi"}
  ,{"pounds per square foot","psf"}
  
  //work
  ,{"foot pounds","ftlbs"}
  
  //uncategorized
  ,{"percentage","pct"}
  ,{"frequency","freq"}

};


