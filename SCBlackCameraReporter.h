//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCManiphestTicketCreator;

@interface SCBlackCameraReporter : NSObject
{
    id <SCManiphestTicketCreator> _ticketCreator;
}

- (void).cxx_destruct;
- (id)causeNameFor:(long long)arg1;
- (void)fileShakeTicketWithCause:(long long)arg1;
- (id)initWithTicketCreator:(id)arg1;
- (void)reportBlackCameraWithCause:(long long)arg1;
@property(retain, nonatomic) id <SCManiphestTicketCreator> ticketCreator; // @synthesize ticketCreator=_ticketCreator;

@end

