//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCVenueViewModel : SCComposerMarshallableObject
{
    NSString *_venueId;
    NSString *_venueName;
}

- (void).cxx_destruct;
- (id)initWithVenueId:(id)arg1 venueName:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(copy, nonatomic) NSString *venueName; // @synthesize venueName=_venueName;

@end

