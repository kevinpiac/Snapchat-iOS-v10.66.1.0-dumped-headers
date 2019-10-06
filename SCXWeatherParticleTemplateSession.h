//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXWeatherAnimatedElement-Protocol.h"

@class NSString, SCXWeatherParticleTemplate;

@interface SCXWeatherParticleTemplateSession : NSObject <SCXWeatherAnimatedElement>
{
    double _addedAtTime;
    double _removedAtTime;
    SCXWeatherParticleTemplate *_template;
    double _seedOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double addedAtTime; // @synthesize addedAtTime=_addedAtTime;
- (_Bool)isDone;
@property(nonatomic) double removedAtTime; // @synthesize removedAtTime=_removedAtTime;
@property(nonatomic) double seedOffset; // @synthesize seedOffset=_seedOffset;
@property(retain, nonatomic) SCXWeatherParticleTemplate *template; // @synthesize template=_template;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
