//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCComposerReloaderServiceDiscoveryDelegate;

@protocol SCComposerReloaderServiceDiscovery <NSObject>
@property(copy, nonatomic) NSString *currentUsername;
@property(nonatomic) __weak id <SCComposerReloaderServiceDiscoveryDelegate> delegate;
- (void)startListening;
- (void)stopListening;
@end
