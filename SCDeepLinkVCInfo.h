//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCDeepLinkURL, UIViewController;

@interface SCDeepLinkVCInfo : NSObject
{
    SCDeepLinkURL *_url;
    NSDictionary *_additionalInfo;
    UIViewController *_sourceVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) NSString *feature;
- (_Bool)isFeature:(id)arg1;
@property(nonatomic) __weak UIViewController *sourceVC; // @synthesize sourceVC=_sourceVC;
@property(retain, nonatomic) SCDeepLinkURL *url; // @synthesize url=_url;

@end
