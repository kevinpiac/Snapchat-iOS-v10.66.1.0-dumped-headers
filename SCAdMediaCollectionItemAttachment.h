//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCAdMediaDeepLink, SCAdMediaWebviewAttachment;

@interface SCAdMediaCollectionItemAttachment : NSObject <NSCopying, NSCoding>
{
    SCAdMediaDeepLink *_deepLink;
    SCAdMediaWebviewAttachment *_webviewAttachment;
    long long _adType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCAdMediaDeepLink *deepLink; // @synthesize deepLink=_deepLink;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeepLink:(id)arg1 webviewAttachment:(id)arg2 adType:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCAdMediaWebviewAttachment *webviewAttachment; // @synthesize webviewAttachment=_webviewAttachment;

@end
