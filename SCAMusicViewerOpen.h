//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAMusicViewerOpen : SCAUserTrackedEvent
{
    long long source;
    NSString *songTitle;
    NSString *artistName;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getArtistName;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSongTitle;
- (long long)getSource;
- (id)init;
- (void)setArtistName:(id)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setSource:(long long)arg1;

@end

