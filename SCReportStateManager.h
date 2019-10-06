//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCReportReasonNode;

@interface SCReportStateManager : NSObject
{
    SCReportReasonNode *_currentNode;
    NSMutableArray *_backstack;
    long long _indexOfSelectedChild;
}

+ (id)submitFeedbackForFeedbackId:(id)arg1;
- (void).cxx_destruct;
- (void)backTrack;
@property(retain, nonatomic) NSMutableArray *backstack; // @synthesize backstack=_backstack;
- (void)clearSelectedChildNode;
@property(retain, nonatomic) SCReportReasonNode *currentNode; // @synthesize currentNode=_currentNode;
- (id)currentReasonId;
- (id)currentReasonsList;
- (id)currentReportingWebviewURLWithSnapId:(id)arg1 lensId:(id)arg2;
- (id)currentSubtitle;
- (id)currentSubtitle:(id)arg1;
- (_Bool)didSelectFinalReason;
- (id)finalReasonId;
@property(nonatomic) long long indexOfSelectedChild; // @synthesize indexOfSelectedChild=_indexOfSelectedChild;
- (id)init;
- (_Bool)isAtRootLevel;
- (_Bool)isChildNodeFinalAtIndex:(unsigned long long)arg1;
- (_Bool)isCurrentNodeChildContextBoxBased;
- (_Bool)isCurrentNodeWebviewBased;
- (unsigned long long)level;
- (void)selectChildNodeAtIndex:(unsigned long long)arg1;
- (_Bool)shouldReportToServer;
- (id)submitFeedbackId;

@end

