//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GiphyRequestToken-Protocol.h"

@class NSString;

@interface SCGiphyRequestToken : NSObject <GiphyRequestToken>
{
    NSString *_requestKey;
}

- (void).cxx_destruct;
- (id)init;
@property(readonly, copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;

@end
