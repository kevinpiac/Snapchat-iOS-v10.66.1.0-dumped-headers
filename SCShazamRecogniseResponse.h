//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCShazamRecogniseResponse : NSObject
{
    NSArray *_matches;
    double _retry;
}

- (void).cxx_destruct;
- (id)_parseSongInfoArtistFromJSONArtist:(id)arg1;
- (id)_parseSongInfoFromJSONMatch:(id)arg1 withRecordDate:(id)arg2;
- (id)_parseSongInfoPlayNowFromJSONOpenIn:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(readonly, nonatomic) double retry; // @synthesize retry=_retry;

@end

