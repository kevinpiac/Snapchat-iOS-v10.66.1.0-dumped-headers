//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIColor;

@interface SCSendToViewMoreViewModel : NSObject <NSCopying>
{
    _Bool _displayShadow;
    NSAttributedString *_showMoreText;
    UIColor *_backgroundColor;
    double _preferredHeight;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool displayShadow; // @synthesize displayShadow=_displayShadow;
- (unsigned long long)hash;
- (id)initWithShowMoreText:(id)arg1 backgroundColor:(id)arg2 displayShadow:(_Bool)arg3 preferredHeight:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(readonly, copy, nonatomic) NSAttributedString *showMoreText; // @synthesize showMoreText=_showMoreText;

@end
