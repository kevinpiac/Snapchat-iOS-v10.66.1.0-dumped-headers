//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MASConstraint;

@protocol MASConstraintDelegate <NSObject>
- (MASConstraint *)constraint:(MASConstraint *)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(MASConstraint *)arg1 shouldBeReplacedWithConstraint:(MASConstraint *)arg2;
@end

