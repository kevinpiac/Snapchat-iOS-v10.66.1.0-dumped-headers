//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBitmojiImageFetcherProtocol-Protocol.h"

@class NSString;
@protocol SCBitmojiImageFetcher;

@interface SCLensExplorerBitmojiImageFetcher : NSObject <SCLensExplorerBitmojiImageFetcherProtocol>
{
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
}

- (void).cxx_destruct;
- (id)fetchBitmojiImageWithBitmojiAvatarId:(id)arg1 bitmojiSelfieId:(id)arg2;
- (id)initWithBitmojiImageFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

