//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCApplicationLoginLoggerDeepLinkHelper : NSObject
{
    NSNumber *_deepLinkSource;
    NSString *_deepLinkId;
    NSString *_deepLinkReferrer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
@property(retain, nonatomic) NSString *deepLinkReferrer; // @synthesize deepLinkReferrer=_deepLinkReferrer;
@property(retain, nonatomic) NSNumber *deepLinkSource; // @synthesize deepLinkSource=_deepLinkSource;

@end

