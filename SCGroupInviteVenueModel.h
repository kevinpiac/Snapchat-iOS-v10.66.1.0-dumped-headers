//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCGroupInviteVenueModel : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_venueId;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 venueId:(id)arg4;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;

@end
