//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SIGBasicInfoViewModel : NSObject <NSCopying>
{
    NSString *_titleText;
    NSString *_detailText;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 detailText:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

@end

