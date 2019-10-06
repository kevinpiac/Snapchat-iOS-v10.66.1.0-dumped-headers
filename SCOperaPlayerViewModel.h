//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCOperaPlayerViewModel : NSObject <NSCopying>
{
    _Bool _isHidden;
    NSString *_accessibilityID;
    NSString *_accessibilityLabel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityID; // @synthesize accessibilityID=_accessibilityID;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessibilityID:(id)arg1 accessibilityLabel:(id)arg2 isHidden:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;

@end
