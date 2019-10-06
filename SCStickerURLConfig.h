//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"
#import "SCStickerURLConfig-Protocol.h"

@class NSString;
@protocol SCStickerURLConfigListener;

@interface SCStickerURLConfig : NSObject <SCServerConfigListener, SCStickerURLConfig>
{
    id <SCStickerURLConfigListener> _listener;
    NSString *_cdnURLString;
}

- (void).cxx_destruct;
- (void)_updateFromServerConfig:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cdnURLString; // @synthesize cdnURLString=_cdnURLString;
- (id)init;
@property(nonatomic) __weak id <SCStickerURLConfigListener> listener; // @synthesize listener=_listener;
- (void)serverConfigDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

