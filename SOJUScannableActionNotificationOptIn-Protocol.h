//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUScannableAction-Protocol.h"

@class NSString;

@protocol SOJUScannableActionNotificationOptIn <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSString *cancelButtonText;
@property(readonly, copy, nonatomic) NSString *confirmButtonText;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSString *namespace;
@end
