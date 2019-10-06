//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCNContentResolutionContentResolveExtractedParams : NSObject
{
    _Bool _isOriginalUrl;
    _Bool _isBoltFallbackServiceUrl;
    _Bool _wasSecondaryUrlAvailable;
    NSString *_contentId;
    NSNumber *_isFastStartEnabled;
    long long _originalUrlReason;
    long long _boltFallbackServiceUrlReason;
}

+ (id)ContentResolveExtractedParamsWithContentId:(id)arg1 isFastStartEnabled:(id)arg2 isOriginalUrl:(_Bool)arg3 originalUrlReason:(long long)arg4 isBoltFallbackServiceUrl:(_Bool)arg5 boltFallbackServiceUrlReason:(long long)arg6 wasSecondaryUrlAvailable:(_Bool)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long boltFallbackServiceUrlReason; // @synthesize boltFallbackServiceUrlReason=_boltFallbackServiceUrlReason;
@property(readonly, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (id)description;
- (id)initWithContentId:(id)arg1 isFastStartEnabled:(id)arg2 isOriginalUrl:(_Bool)arg3 originalUrlReason:(long long)arg4 isBoltFallbackServiceUrl:(_Bool)arg5 boltFallbackServiceUrlReason:(long long)arg6 wasSecondaryUrlAvailable:(_Bool)arg7;
@property(readonly, nonatomic) _Bool isBoltFallbackServiceUrl; // @synthesize isBoltFallbackServiceUrl=_isBoltFallbackServiceUrl;
@property(readonly, nonatomic) NSNumber *isFastStartEnabled; // @synthesize isFastStartEnabled=_isFastStartEnabled;
@property(readonly, nonatomic) _Bool isOriginalUrl; // @synthesize isOriginalUrl=_isOriginalUrl;
@property(readonly, nonatomic) long long originalUrlReason; // @synthesize originalUrlReason=_originalUrlReason;
@property(readonly, nonatomic) _Bool wasSecondaryUrlAvailable; // @synthesize wasSecondaryUrlAvailable=_wasSecondaryUrlAvailable;

@end
