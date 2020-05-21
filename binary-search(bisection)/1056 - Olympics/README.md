## Key Idea
#### First draw the geometric model of the stadium and tag length by l widh by w, both diagonal by 2r, sliced circle by arcDist
let length l= a*k, width w = b*k, assume k through bisection.<br>
i) From sides of rectangle we can calculate it's diagonal which is diameter (diameter = 2 * radious).<br>
  note : diagonal of rectangle is same if we slice the rectangle into two equal triangle then hypotenuse of any triangle is equal to    diagonal<br>
ii) From the triangle rwr (radious-width-radious) we can calculate arc distance. now perimeter = 2 * (arcDistance + length).

** If perimeter is less then 400 greater the value or k else viceversa. and goto <b>(i)</b>.

** More you bisect less the error but 50 iteration is enough.
