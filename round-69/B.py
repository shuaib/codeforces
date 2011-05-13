t = raw_input()
t = t.strip().split(":")
hh = float(t[0])
mm = float(t[1])

hh_mm = mm/60.0

hh = hh+hh_mm

hh_angle = (hh/12)*360

mm_angle = (mm/60)*360

hh_angle = hh_angle%360
mm_angle = mm_angle%360

print hh_angle, mm_angle
