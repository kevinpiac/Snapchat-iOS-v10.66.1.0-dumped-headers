//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXTile-Protocol.h"

@class NSArray, NSString, SCMTTileId;

@interface SCXPOITile : NSObject <SCXTile>
{
    SCMTTileId *_tileId;
    long long _epoch;
    NSArray *_pois;
}

- (void).cxx_destruct;
@property long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSArray *pois; // @synthesize pois=_pois;
@property(retain) SCMTTileId *tileId; // @synthesize tileId=_tileId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

