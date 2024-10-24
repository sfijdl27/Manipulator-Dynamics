void current_sync_M_compensation(double p[7])
{
	double q1,q2,q3,q4,q5,q6;

  q1 = p[1]*pi/180;
  q2 = p[2]*pi/180;
  q3 = p[3]*pi/180;
  q4 = p[4]*pi/180;
  q5 = p[5]*pi/180;
  q6 = p[6]*pi/180;

  M_com[0] = 0.04189*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 1.0*q5) - 0.3772*sin(2.0*q2 + 2.0*q3 + 2.0*q4) - 0.0967*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 2.0*q5) - 0.0967*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + 2.0*q5) + 0.01543*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 2.0*q6) + 0.01543*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + 2.0*q6) - 0.07381*sin(2.0*q2 + 2.0*q3 + 2.0*q4 - 1.0*q5) - 0.04371*sin(2.0*q2 + 2.0*q3 + 2.0*q4 - 2.0*q5) + 0.04371*sin(2.0*q2 + 2.0*q3 + 2.0*q4 + 2.0*q5) - 0.01029*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 1.0*q5 - 2.0*q6) + 0.01029*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 1.0*q5 + 2.0*q6) + 0.002572*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 2.0*q5 - 2.0*q6) + 0.002572*cos(2.0*q2 + 2.0*q3 + 2.0*q4 - 2.0*q5 + 2.0*q6) + 0.002572*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + 2.0*q5 - 2.0*q6) + 0.002572*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + 2.0*q5 + 2.0*q6) - 0.04189*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + q5) + 0.5855*cos(2.0*q2) + 0.1934*cos(2.0*q5) + 0.01029*cos(2.0*q6) - 0.07381*sin(2.0*q2 + 2.0*q3 + 2.0*q4 + q5) - 0.01029*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + q5 - 2.0*q6) + 0.01029*cos(2.0*q2 + 2.0*q3 + 2.0*q4 + q5 + 2.0*q6) + 0.4279*sin(2.0*q2) - 0.08743*sin(2.0*q5) + 0.005147*sin(2.0*q6) + 0.06968*cos(2.0*q2 + 2.0*q3) - 0.005144*cos(2.0*q5 - 2.0*q6) - 0.005144*cos(2.0*q5 + 2.0*q6) + 0.4326*sin(2.0*q2 + 2.0*q3) - 0.2457*cos(2.0*q2 + 2.0*q3 + 2.0*q4) - 0.005147*cos(2.0*q5)*sin(2.0*q6) + 0.01637*sin(2.0*q5)*cos(q6) + 0.03171*sin(2.0*q5)*sin(q6) + 0.01544*cos(2.0*q2)*cos(2.0*q3)*cos(2.0*q4)*sin(2.0*q6) - 0.01544*cos(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*sin(2.0*q6) - 0.01544*cos(2.0*q3)*sin(2.0*q2)*sin(2.0*q4)*sin(2.0*q6) - 0.01544*cos(2.0*q4)*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q6) - 0.01637*cos(2.0*q2)*cos(2.0*q3)*cos(2.0*q4)*sin(2.0*q5)*cos(q6) + 0.02059*cos(2.0*q2)*cos(2.0*q3)*cos(2.0*q6)*sin(2.0*q4)*cos(q5) + 0.02059*cos(2.0*q2)*cos(2.0*q4)*cos(2.0*q6)*sin(2.0*q3)*cos(q5) + 0.02059*cos(2.0*q3)*cos(2.0*q4)*cos(2.0*q6)*sin(2.0*q2)*cos(q5) - 0.03171*cos(2.0*q2)*cos(2.0*q3)*cos(2.0*q4)*sin(2.0*q5)*sin(q6) + 0.01637*cos(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*sin(2.0*q5)*cos(q6) + 0.01637*cos(2.0*q3)*sin(2.0*q2)*sin(2.0*q4)*sin(2.0*q5)*cos(q6) + 0.01637*cos(2.0*q4)*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q5)*cos(q6) - 0.02059*cos(2.0*q6)*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*cos(q5) + 0.03171*cos(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*sin(2.0*q5)*sin(q6) + 0.03171*cos(2.0*q3)*sin(2.0*q2)*sin(2.0*q4)*sin(2.0*q5)*sin(q6) + 0.03171*cos(2.0*q4)*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q5)*sin(q6) - 0.06341*cos(2.0*q2)*cos(2.0*q3)*sin(2.0*q4)*cos(q6)*sin(q5) - 0.06341*cos(2.0*q2)*cos(2.0*q4)*sin(2.0*q3)*cos(q6)*sin(q5) - 0.06341*cos(2.0*q3)*cos(2.0*q4)*sin(2.0*q2)*cos(q6)*sin(q5) + 0.03274*cos(2.0*q2)*cos(2.0*q3)*sin(2.0*q4)*sin(q5)*sin(q6) + 0.03274*cos(2.0*q2)*cos(2.0*q4)*sin(2.0*q3)*sin(q5)*sin(q6) + 0.03274*cos(2.0*q3)*cos(2.0*q4)*sin(2.0*q2)*sin(q5)*sin(q6) + 0.06341*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*cos(q6)*sin(q5) + 0.005147*cos(2.0*q2)*cos(2.0*q3)*cos(2.0*q4)*cos(2.0*q5)*sin(2.0*q6) - 0.03274*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q4)*sin(q5)*sin(q6) - 0.005147*cos(2.0*q2)*cos(2.0*q5)*sin(2.0*q3)*sin(2.0*q4)*sin(2.0*q6) - 0.005147*cos(2.0*q3)*cos(2.0*q5)*sin(2.0*q2)*sin(2.0*q4)*sin(2.0*q6) - 0.005147*cos(2.0*q4)*cos(2.0*q5)*sin(2.0*q2)*sin(2.0*q3)*sin(2.0*q6) + 1.732;
  M_com[1] = 0.1934*cos(q2 + q3 + q4 - 2.0*q5) - 0.1765*sin(q2 + q3 + q4) - 0.04189*cos(q2 + q3 + q4 - 1.0*q5) - 0.352*cos(q2 + q3 + q4) - 0.1934*cos(q2 + q3 + q4 + 2.0*q5) + 0.07381*sin(q2 + q3 + q4 - 1.0*q5) + 0.08743*sin(q2 + q3 + q4 - 2.0*q5) + 0.08743*sin(q2 + q3 + q4 + 2.0*q5) + 0.01029*cos(q2 + q3 + q4 - 1.0*q5 - 2.0*q6) - 0.01029*cos(q2 + q3 + q4 - 1.0*q5 + 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 - 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 + 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 - 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 + 2.0*q6) - 0.04189*cos(q2 + q3 + q4 + q5) - 0.07381*sin(q2 + q3 + q4 + q5) - 0.01029*cos(q2 + q3 + q4 + q5 - 2.0*q6) + 0.01029*cos(q2 + q3 + q4 + q5 + 2.0*q6) + 0.1855*cos(q2 + q3) + 0.1308*sin(q2 + q3) - 0.4406*cos(q2) - 0.2991*sin(q2) + 0.01029*sin(2.0*q5)*sin(2.0*q6)*sin(q2)*sin(q3)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q3)*cos(q6)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q4)*cos(q6)*sin(q3) - 0.03274*cos(2.0*q5)*cos(q3)*cos(q4)*cos(q6)*sin(q2) + 0.02059*cos(2.0*q6)*cos(q2)*cos(q3)*cos(q4)*sin(q5) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q3)*sin(q4)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q4)*sin(q3)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q3)*cos(q4)*sin(q2)*sin(q6) + 0.03274*cos(2.0*q5)*cos(q6)*sin(q2)*sin(q3)*sin(q4) - 0.02059*cos(2.0*q6)*cos(q2)*sin(q3)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q3)*sin(q2)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q4)*sin(q2)*sin(q3)*sin(q5) + 0.06341*cos(2.0*q5)*sin(q2)*sin(q3)*sin(q4)*sin(q6) + 0.06341*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6) - 0.03274*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6) - 0.06341*cos(q2)*cos(q5)*cos(q6)*sin(q3)*sin(q4) - 0.06341*cos(q3)*cos(q5)*cos(q6)*sin(q2)*sin(q4) - 0.06341*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + 0.03274*cos(q2)*cos(q5)*sin(q3)*sin(q4)*sin(q6) + 0.03274*cos(q3)*cos(q5)*sin(q2)*sin(q4)*sin(q6) + 0.03274*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q3)*sin(q4) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q4)*sin(q3) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q3)*cos(q4)*sin(q2);
  M_com[2] = 0.1934*cos(q2 + q3 + q4 - 2.0*q5) - 0.1765*sin(q2 + q3 + q4) - 0.04189*cos(q2 + q3 + q4 - 1.0*q5) - 0.352*cos(q2 + q3 + q4) - 0.1934*cos(q2 + q3 + q4 + 2.0*q5) + 0.07381*sin(q2 + q3 + q4 - 1.0*q5) + 0.08743*sin(q2 + q3 + q4 - 2.0*q5) + 0.08743*sin(q2 + q3 + q4 + 2.0*q5) + 0.01029*cos(q2 + q3 + q4 - 1.0*q5 - 2.0*q6) - 0.01029*cos(q2 + q3 + q4 - 1.0*q5 + 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 - 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 + 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 - 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 + 2.0*q6) - 0.04189*cos(q2 + q3 + q4 + q5) - 0.07381*sin(q2 + q3 + q4 + q5) - 0.01029*cos(q2 + q3 + q4 + q5 - 2.0*q6) + 0.01029*cos(q2 + q3 + q4 + q5 + 2.0*q6) + 0.1855*cos(q2 + q3) + 0.1308*sin(q2 + q3) + 0.01029*sin(2.0*q5)*sin(2.0*q6)*sin(q2)*sin(q3)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q3)*cos(q6)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q4)*cos(q6)*sin(q3) - 0.03274*cos(2.0*q5)*cos(q3)*cos(q4)*cos(q6)*sin(q2) + 0.02059*cos(2.0*q6)*cos(q2)*cos(q3)*cos(q4)*sin(q5) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q3)*sin(q4)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q4)*sin(q3)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q3)*cos(q4)*sin(q2)*sin(q6) + 0.03274*cos(2.0*q5)*cos(q6)*sin(q2)*sin(q3)*sin(q4) - 0.02059*cos(2.0*q6)*cos(q2)*sin(q3)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q3)*sin(q2)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q4)*sin(q2)*sin(q3)*sin(q5) + 0.06341*cos(2.0*q5)*sin(q2)*sin(q3)*sin(q4)*sin(q6) + 0.06341*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6) - 0.03274*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6) - 0.06341*cos(q2)*cos(q5)*cos(q6)*sin(q3)*sin(q4) - 0.06341*cos(q3)*cos(q5)*cos(q6)*sin(q2)*sin(q4) - 0.06341*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + 0.03274*cos(q2)*cos(q5)*sin(q3)*sin(q4)*sin(q6) + 0.03274*cos(q3)*cos(q5)*sin(q2)*sin(q4)*sin(q6) + 0.03274*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q3)*sin(q4) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q4)*sin(q3) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q3)*cos(q4)*sin(q2);
  M_com[3] = 0.1934*cos(q2 + q3 + q4 - 2.0*q5) - 0.1765*sin(q2 + q3 + q4) - 0.04189*cos(q2 + q3 + q4 - 1.0*q5) - 0.352*cos(q2 + q3 + q4) - 0.1934*cos(q2 + q3 + q4 + 2.0*q5) + 0.07381*sin(q2 + q3 + q4 - 1.0*q5) + 0.08743*sin(q2 + q3 + q4 - 2.0*q5) + 0.08743*sin(q2 + q3 + q4 + 2.0*q5) + 0.01029*cos(q2 + q3 + q4 - 1.0*q5 - 2.0*q6) - 0.01029*cos(q2 + q3 + q4 - 1.0*q5 + 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 - 2.0*q6) - 0.005144*cos(q2 + q3 + q4 - 2.0*q5 + 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 - 2.0*q6) + 0.005144*cos(q2 + q3 + q4 + 2.0*q5 + 2.0*q6) - 0.04189*cos(q2 + q3 + q4 + q5) - 0.07381*sin(q2 + q3 + q4 + q5) - 0.01029*cos(q2 + q3 + q4 + q5 - 2.0*q6) + 0.01029*cos(q2 + q3 + q4 + q5 + 2.0*q6) + 0.01029*sin(2.0*q5)*sin(2.0*q6)*sin(q2)*sin(q3)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q3)*cos(q6)*sin(q4) - 0.03274*cos(2.0*q5)*cos(q2)*cos(q4)*cos(q6)*sin(q3) - 0.03274*cos(2.0*q5)*cos(q3)*cos(q4)*cos(q6)*sin(q2) + 0.02059*cos(2.0*q6)*cos(q2)*cos(q3)*cos(q4)*sin(q5) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q3)*sin(q4)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q2)*cos(q4)*sin(q3)*sin(q6) - 0.06341*cos(2.0*q5)*cos(q3)*cos(q4)*sin(q2)*sin(q6) + 0.03274*cos(2.0*q5)*cos(q6)*sin(q2)*sin(q3)*sin(q4) - 0.02059*cos(2.0*q6)*cos(q2)*sin(q3)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q3)*sin(q2)*sin(q4)*sin(q5) - 0.02059*cos(2.0*q6)*cos(q4)*sin(q2)*sin(q3)*sin(q5) + 0.06341*cos(2.0*q5)*sin(q2)*sin(q3)*sin(q4)*sin(q6) + 0.06341*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6) - 0.03274*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6) - 0.06341*cos(q2)*cos(q5)*cos(q6)*sin(q3)*sin(q4) - 0.06341*cos(q3)*cos(q5)*cos(q6)*sin(q2)*sin(q4) - 0.06341*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + 0.03274*cos(q2)*cos(q5)*sin(q3)*sin(q4)*sin(q6) + 0.03274*cos(q3)*cos(q5)*sin(q2)*sin(q4)*sin(q6) + 0.03274*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q3)*sin(q4) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q2)*cos(q4)*sin(q3) - 0.01029*sin(2.0*q5)*sin(2.0*q6)*cos(q3)*cos(q4)*sin(q2);
  M_com[4] = 0.07381*sin(q2 + q3 + q4 - 1.0*q5) - 0.04189*cos(q2 + q3 + q4 - 1.0*q5) - 0.02057*cos(q2 + q3 + q4 - 2.0*q6) - 0.02057*cos(q2 + q3 + q4 + 2.0*q6) - 0.2803*cos(q2 + q3 + q4) + 0.01029*cos(q2 + q3 + q4 - 1.0*q5 - 2.0*q6) - 0.01029*cos(q2 + q3 + q4 - 1.0*q5 + 2.0*q6) + 0.04189*cos(q2 + q3 + q4 + q5) + 0.07381*sin(q2 + q3 + q4 + q5) + 0.01029*cos(q2 + q3 + q4 + q5 - 2.0*q6) - 0.01029*cos(q2 + q3 + q4 + q5 + 2.0*q6) - 0.02059*sin(2.0*q6)*cos(q2)*cos(q3)*cos(q4) + 0.02059*sin(2.0*q6)*cos(q2)*sin(q3)*sin(q4) + 0.02059*sin(2.0*q6)*cos(q3)*sin(q2)*sin(q4) + 0.02059*sin(2.0*q6)*cos(q4)*sin(q2)*sin(q3) - 0.02059*cos(2.0*q6)*cos(q2)*cos(q3)*cos(q5)*sin(q4) - 0.02059*cos(2.0*q6)*cos(q2)*cos(q4)*cos(q5)*sin(q3) - 0.02059*cos(2.0*q6)*cos(q3)*cos(q4)*cos(q5)*sin(q2) + 0.02059*cos(2.0*q6)*cos(q5)*sin(q2)*sin(q3)*sin(q4) + 0.06341*cos(q2)*cos(q3)*cos(q6)*sin(q4)*sin(q5) + 0.06341*cos(q2)*cos(q4)*cos(q6)*sin(q3)*sin(q5) + 0.06341*cos(q3)*cos(q4)*cos(q6)*sin(q2)*sin(q5) - 0.03274*cos(q2)*cos(q3)*sin(q4)*sin(q5)*sin(q6) - 0.03274*cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q6) - 0.03274*cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q6) - 0.06341*cos(q6)*sin(q2)*sin(q3)*sin(q4)*sin(q5) + 0.03274*sin(q2)*sin(q3)*sin(q4)*sin(q5)*sin(q6);
  M_com[5] = 0.09616*cos(q2 + q3 + q4 + q5) - 0.09616*cos(q2 + q3 + q4 - 1.0*q5) + 0.06341*cos(q2)*cos(q3)*cos(q4)*cos(q6) - 0.03274*cos(q2)*cos(q3)*cos(q4)*sin(q6) - 0.06341*cos(q2)*cos(q6)*sin(q3)*sin(q4) - 0.06341*cos(q3)*cos(q6)*sin(q2)*sin(q4) - 0.06341*cos(q4)*cos(q6)*sin(q2)*sin(q3) + 0.03274*cos(q2)*sin(q3)*sin(q4)*sin(q6) + 0.03274*cos(q3)*sin(q2)*sin(q4)*sin(q6) + 0.03274*cos(q4)*sin(q2)*sin(q3)*sin(q6) - 0.03274*cos(q2)*cos(q3)*cos(q5)*cos(q6)*sin(q4) - 0.03274*cos(q2)*cos(q4)*cos(q5)*cos(q6)*sin(q3) - 0.03274*cos(q3)*cos(q4)*cos(q5)*cos(q6)*sin(q2) - 0.06341*cos(q2)*cos(q3)*cos(q5)*sin(q4)*sin(q6) - 0.06341*cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6) - 0.06341*cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6) + 0.03274*cos(q5)*cos(q6)*sin(q2)*sin(q3)*sin(q4) + 0.06341*cos(q5)*sin(q2)*sin(q3)*sin(q4)*sin(q6);
  M_com[6] = 0.1749*sin(2.0*q5) - 0.4074*cos(2.0*q5) - 0.02059*sin(2.0*q6) - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 5.069;
  M_com[7] = 0.1749*sin(2.0*q5) - 0.4074*cos(2.0*q5) - 0.02059*sin(2.0*q6) - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 1.97;
  M_com[8] = 0.1749*sin(2.0*q5) - 0.4074*cos(2.0*q5) - 0.02059*sin(2.0*q6) - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 0.1196;
  M_com[9] = 0.08378*cos(q5) + 0.1682*sin(q5) - 0.06341*cos(q5)*cos(q6) + 0.03274*cos(q5)*sin(q6) - 0.04117*cos(q6)^2*sin(q5) + 0.0823*cos(q6)*sin(q5)*sin(q6);
  M_com[10] = 0.1923*cos(q5) - 0.03274*cos(q6)*sin(q5) - 0.06341*sin(q5)*sin(q6);
  M_com[11] = 0.1749*sin(2.0*q5) - 0.4074*cos(2.0*q5) - 0.02059*sin(2.0*q6) - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 1.97;
  M_com[12] = 0.1749*sin(2.0*q5) - 0.4074*cos(2.0*q5) - 0.02059*sin(2.0*q6) - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 0.1196;
  M_com[13] = 0.08378*cos(q5) + 0.1682*sin(q5) - 0.06341*cos(q5)*cos(q6) + 0.03274*cos(q5)*sin(q6) - 0.04117*cos(q6)^2*sin(q5) + 0.0823*cos(q6)*sin(q5)*sin(q6);
  M_com[14] = 0.1923*cos(q5) - 0.03274*cos(q6)*sin(q5) - 0.06341*sin(q5)*sin(q6);
  M_com[15] = 0.1749*sin(2.0*q5) - 0.02059*sin(2.0*q6) - 0.8148*cos(q5)^2 - 0.0823*cos(q6)^2 + 0.0823*cos(q5)^2*cos(q6)^2 + 0.04117*cos(q5)^2*cos(q6)*sin(q6) - 0.06547*cos(q5)*cos(q6)*sin(q5) - 0.1268*cos(q5)*sin(q5)*sin(q6) + 0.527;
  M_com[16] = 0.08378*cos(q5) + 0.1682*sin(q5) - 0.06341*cos(q5)*cos(q6) + 0.03274*cos(q5)*sin(q6) - 0.04117*cos(q6)^2*sin(q5) + 0.0823*cos(q6)*sin(q5)*sin(q6);
  M_com[17] = 0.1923*cos(q5) - 0.03274*cos(q6)*sin(q5) - 0.06341*sin(q5)*sin(q6);
  M_com[18] = 0.02059*sin(2.0*q6) + 0.0823*cos(q6)^2 + 0.2391;
  M_com[19] = 0.03274*sin(q6) - 0.06341*cos(q6);
  M_com[20] = 0.1923;

}