//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCImpalaPublisherProfilePlayerOverlayViewModel : SCComposerMarshallableObject
{
    NSString *_episodeId;
    NSString *_logoUrl;
    NSString *_publisherDescription;
    NSString *_buttonText;
    NSString *_callToActionText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
- (id)initWithEpisodeId:(id)arg1 logoUrl:(id)arg2 publisherDescription:(id)arg3 buttonText:(id)arg4 callToActionText:(id)arg5;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

