#include "../inc/defs.h"


char *getColorName(int color)
{
  char *name;
  
  switch(color)
  {
    case 0:  name="blue";
      break;
    case 1:  name="red";
      break;
    case 2:  name="green";
      break;
    case 3:  name="yellow";
      break;
    case 4:  name="navy";
      break;
    case 5:  name="salmon";
      break;
    case 6:  name="limegreen";
      break;
    case 7:  name="gold";
      break;
    case 8:  name="blueviolet";
      break;
    case 9:  name="coral";
      break;
    case 10:  name="chartreuse";
      break;
      
      case 11:  name="goldenrod";
      break;
      case 12:  name="skyblue";
      break;
      case 13:  name="salmon";
      break;
      case 14:  name="darkgreen";
      break;
      case 15:  name="lightyellow";
      break;
      case 16:  name="steelblue";
      break;
      case 17:  name="violetred";
      break;
      case 18:  name="springgreen";
      break;
      case 19:  name="yellowgreen";
      break;
      case 20:  name="slateblue";
      break;
      
      case 21:  name="violet";
      break;
      case 22:  name="seagreen";
      break;
      case 23:  name="palegoldenrod";
      break;
      case 24:  name="royalblue";
      break;
      case 25:  name="purple";
      break;
      case 26:  name="palegreen";
      break;
      case 27:  name="lightgoldenrodyellow";
      break;
      case 28:  name="powderblue";
      break;
      case 29:  name="plum";
      break;
      case 30:  name="olivedrab";
      break;
      
      case 31:  name="lightgoldenrod";
      break;
      case 32:  name="navyblue";
      break;
      case 33:  name="palevioletred";
      break;
      case 34:  name="mintcream";
      break;
      case 35:  name="greenyellow";
      break;
      case 36:  name="midnightblue";
      break;
      case 37:  name="orchid";
      break;
      case 38:  name="mediumspringgreen";
      break;
      case 39:  name="darkgoldenrod";
      break;
      case 40:  name="mediumslateblue";
      break;
      
      case 41:  name="mediumvioletred";
      break;
      case 42:  name="mediumseagreen";
      break;
      case 43:  name="orangered";
      break;
      case 44:  name="mediumblue";
      break;
      case 45:  name="mediumpurple";
      break;
      case 46:  name="lightseagreen";
      break;
      case 47:  name="orange";
      break;
      case 48:  name="lightslateblue";
      break;
      case 49:  name="magenta";
      break;
      case 50:  name="lawngreen";
      break;
      
      case 51:  name="indigo";
      break;
      case 52:  name="darkviolet";
      break;
      case 53:  name="dodgerblue";
      break;
      case 54:  name="darkorchid";
      break;
      case 55:  name="deepskyblue";
      break;
      case 56:  name="blueviolet";
      break;
      case 57:  name="darkslateblue";
      break;
      case 58:  name="violetred";
      break;
      case 59:  name="cornﬂowerblue";
      break;
      case 60:  name="tomato";
      break;
      
      case 61:  name="cadetblue";
      break;
      case 62:  name="pink";
      break;
      case 63:  name="aliceblue";
      break;
      case 64:  name="palevioletred";
      break;
      case 65:  name="turquoise";
      break;
      case 66:  name="orangered";
      break;
      case 67:  name="paleturquoise";
      break;
      case 68:  name="mediumvioletred";
      break;
      case 69:  name="mediumturquoise";
      break;
      case 70:  name="maroon";
      break;
      
      case 71:  name="mediumaquamarine";
      break;
      case 72:  name="lightsalmon";
      break;
      case 73:  name="lightcyan";
      break;
      case 74:  name="lightpink";
      break;
      case 75:  name="darkturquoise";
      break;
      case 76:  name="indianred";
      break;
      case 77:  name="cyan";
      break;
      case 78:  name="hotpink";
      break;
      case 79:  name="aquamarine";
      break;
      case 80:  name="ﬁrebrick";
      break;
      
      case 81:  name="forestgreen";
      break;
      case 82:  name="deeppink";
      break;
      case 83:  name="darkseagreen";
      break;
      case 84:  name="darksalmon";
      break;
      case 85:  name="darkolivegreen";
      break;
      case 86:  name="crimson";
      break;
      
    default: name="grey";
  }

  return name;
}
