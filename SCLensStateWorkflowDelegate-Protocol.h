//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCameraLensesInteractor, SCCameraViewControllerInternalState, SCLensesUIControllerStateBuilder, SCUserSession;
@protocol SCCameraViewControllerLensDelegate, SCLensEntryPointTrackableProtocol, SCLensStateWorkflow;

@protocol SCLensStateWorkflowDelegate <NSObject>
- (SCCameraLensesInteractor *)lensStateWorkflowCameraLensesInteractor:(id <SCLensStateWorkflow>)arg1;
- (id <SCCameraViewControllerLensDelegate>)lensStateWorkflowCameraViewControllerLensDelegate:(id <SCLensStateWorkflow>)arg1;
- (SCCameraViewControllerInternalState *)lensStateWorkflowCurrentCameraViewControllerInternalState:(id <SCLensStateWorkflow>)arg1;
- (SCLensesUIControllerStateBuilder *)lensStateWorkflowDefaultEmptyLensControllerStateBuilder:(id <SCLensStateWorkflow>)arg1;
- (_Bool)lensStateWorkflowIsPresentingOperaController:(id <SCLensStateWorkflow>)arg1;
- (_Bool)lensStateWorkflowIsPresentingPreviewViewController:(id <SCLensStateWorkflow>)arg1;
- (_Bool)lensStateWorkflowIsPreviewViewControllerConfiguredWithLensPresented:(id <SCLensStateWorkflow>)arg1;
- (id <SCLensEntryPointTrackableProtocol>)lensStateWorkflowLensEntryPointTrackable:(id <SCLensStateWorkflow>)arg1;
- (void)lensStateWorkflowPrepareToRestore:(id <SCLensStateWorkflow>)arg1;
- (void)lensStateWorkflowStartHandlingVolumeButtonEventsIfNeeded:(id <SCLensStateWorkflow>)arg1;
- (SCUserSession *)lensStateWorkflowUserSession:(id <SCLensStateWorkflow>)arg1;
@end

