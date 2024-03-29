//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL;
@protocol SCMapboxStyleProviderListener;

@protocol SCMapboxStyleProvider <NSObject>
- (NSError *)loadError;
- (NSURL *)styleURL;
- (NSURL *)styleURLWithIsPlaceholder:(_Bool *)arg1;

@optional
- (void)addListener:(id <SCMapboxStyleProviderListener>)arg1;
- (void)removeListener:(id <SCMapboxStyleProviderListener>)arg1;
@end

