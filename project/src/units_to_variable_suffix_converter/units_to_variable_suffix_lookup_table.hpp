#pragma once
#include "systems.hpp"

static const std::unordered_map<std::string,std::string> UNITS_TO_VARIABLE_SUFFIX_LOOKUP_TABLE

  //length
  ,{"nanometers","nm"}
  ,{"micrometers","um"}
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
  ,{"nautical leagues","n_leag"}
  ,{"fathoms","fath"}
  ,{"cable length","cbl"}
  
   //speed (length / time)
  ,{"feet / minute","fpm"}
  ,{"revolutions / minute","rpm"}
  ,{"meters / second","mps"}
  ,{"knots","kts"}
  ,{"mach","mach"}
  
  //acceleration
  ,{"degrees / second^2","degpss"}
  ,{"meters / second^2","mpss"}
  
  //force
  ,{"pounds / minute","ppm"}
  ,{"pounds / hour","pph"}
  ,{"newtons", "n"}
  
  //area
  ,{"square inches","sqin"}
  ,{"square feet","sqft"}
  ,{"square miles","sqmi"}
  ,{"square centimeters","cm2"}
  ,{"square meters","m2"}
  ,{"square kilometers","km2"}
  ,{"acre","acre"}
  ,{"hectare","ha"}
  
  //volume
  ,{"cubic inches","cuin"}
  ,{"cubic feet","cuft"}
  ,{"cubic centimeters","cc"}
  ,{"cubic meters","m3"}
  
  //currency
  ,{"united states dollars","usd"}
  ,{"euro","e"}
  ,{"yen","y"}
  
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
  ,{"ticks","ticks"}
  
  //temperature
  ,{"degree farenheit","degf"}
  ,{"degree celsius","degc"}
  
  //angles
  ,{"degrees","deg"}
  ,{"degrees / second","degps"}
  
  //torque
  ,{"newton meters","Nm"}
  
  //energy
  ,{"joules","j"}
  
  //electrical
  ,{"coulombs","c"}
  ,{"volts","v"}
  ,{"amps","amp"}
  
  //power
  ,{"horse power","hp"}
  ,{"watts","w"}
  
  //pressure
  ,{"inches of mercury","inHg"}
  ,{"pascal","pa"}
  ,{"pounds / square inch","psi"}
  ,{"pounds / square foot","psf"}
  
  //work
  ,{"foot pounds","lbf"}
  
  //uncategorized
  ,{"percentage","pct"}
  ,{"frequency","freq"}

};


