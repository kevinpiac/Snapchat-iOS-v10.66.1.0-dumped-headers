//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUConfigConfigProperty-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUConfigBooleanConfigProperty <NSObject, NSCoding, NSCopying, SOJUConfigConfigProperty>
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSNumber *reloadAppOnChange;
@property(readonly, copy, nonatomic) NSNumber *value;
@end

