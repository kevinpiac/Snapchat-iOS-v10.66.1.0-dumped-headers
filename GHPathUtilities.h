//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GHPathUtilities : NSObject
{
}

+ (double)calculateCubicSplineStepFromFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint1:(struct CGPoint)arg3 withControlPoint2:(struct CGPoint)arg4;
+ (double)calculateQuadraticSplineStepFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint:(struct CGPoint)arg3;
+ (double)cubicSplineLengthFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint1:(struct CGPoint)arg3 withControlPoint2:(struct CGPoint)arg4 andStep:(double)arg5;
+ (void)findPointAndVectorAtDistance:(double)arg1 intoPath:(struct CGPath *)arg2 intoCallback:(CDUnknownBlockType)arg3;
+ (double)quadraticBezierLengthFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint:(struct CGPoint)arg3 andStep:(double)arg4;
+ (double)totalLengthOfCGPath:(struct CGPath *)arg1;

@end

