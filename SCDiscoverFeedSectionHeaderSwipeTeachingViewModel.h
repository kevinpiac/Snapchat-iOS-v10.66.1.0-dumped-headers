//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCDiscoverFeedSectionHeaderSwipeTeachingViewModel : NSObject <NSCopying>
{
    NSAttributedString *_titleText;
    double _rightMargin;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 rightMargin:(double)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;

@end

