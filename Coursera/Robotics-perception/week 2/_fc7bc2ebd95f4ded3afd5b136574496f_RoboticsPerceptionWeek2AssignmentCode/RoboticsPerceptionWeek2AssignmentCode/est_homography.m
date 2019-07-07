function [ H ] = est_homography(video_pts, logo_pts)
% est_homography estimates the homography to transform each of the
% video_pts into the logo_pts
% Inputs:
%     video_pts: a 4x2 matrix of corner points in the video
%     logo_pts: a 4x2 matrix of logo points that correspond to video_pts
% Outputs:
%     H: a 3x3 homography matrix such that logo_pts ~ H*video_pts
% Written for the University of Pennsylvania's Robotics:Perception course

% YOUR CODE HERE
% we need to compute the Homography!
% xlogo=H*xvideo
H = [];
A=[];
%For a set of corresponding points
for i=1:size(video_pts,1)
    x1=video_pts(i,1);
    x2=video_pts(i,2);
    x1_prime=logo_pts(i,1);
    x2_prime=logo_pts(i,2);
    ax=[-x1 -x2 -1 0 0 0 x1*x1_prime x2*x1_prime x1_prime];
    ay=[0 0 0 -x1 -x2 -1 x1*x2_prime x2*x2_prime x2_prime];
    A=[A;ax;ay;];
end
[U,S,V]=svd(A);
h1=V(:,9);
h2=h1/h1(9);
H=reshape(h2,3,3);
