$fn=36;

module horn() {
	difference() {
		union() {
			cylinder(h=4.5, r=3.5);
			translate([14.5,0,0]) cylinder(h=1.5,r=2);
			linear_extrude(height=1.5) {
				polygon(points=[
						[0,3.5],
						[14.5,2],
						[14.5,-2],
						[0,-3.5],
					]);
			}
		}
		translate([0,0,1]) cylinder(h=8, r=2.2);
		translate([0,0,-1]) cylinder(h=8, r=1);
		translate([14.5,0,-1]) cylinder(h=3,r=.5);
	}
}

module armseg() {
	difference() {
		union() {
			translate([0,0,0]) cylinder(r=6,h=3.5);
			translate([0,-4.25,0]) cube([35,8.5,3.5]);
			translate([35,0,0]) cylinder(r=6,h=3.5);
		}
	}
}

difference() {
	armseg();
	translate([0,0,2.51]) horn();
	translate([0,0,-1]) cylinder(r=1.5,h=6);
	translate([14.5,0,-1]) cylinder(r=.51,h=6);
	translate([35,0,-1]) cylinder(r=1.5,h=6);
}
//horn();