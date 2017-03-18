{ Parsed from IntentsUI.framework INUIHostedViewControlling.h }

{$ifdef TYPES}
type
  INUIHostedViewControllingProtocolPtr = ^INUIHostedViewControllingProtocol;
{$endif}

{$ifdef TYPES}
type
  INUIHostedViewContext = NSUInteger;
  INUIHostedViewContextPtr = ^INUIHostedViewContext;

const
  INUIHostedViewContextSiriSnippet = 0;
  INUIHostedViewContextMapsCard = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  INUIHostedViewControllingProtocol = objcprotocol external name 'INUIHostedViewControlling' (NSObjectProtocol)
    procedure configureWithInteraction_context_completion (interaction: INInteraction; context: INUIHostedViewContext; completion: OpaqueCBlock); message 'configureWithInteraction:context:completion:';
  end;
{$endif}

{$ifdef CLASSES}

type
  INUIHostedViewControlling = objccategory external (NSExtensionContext)
    function API_UNAVAILABLE(macosx): CGSize hostedViewMinimumAllowedSize ); message 'API_UNAVAILABLE(macosx)';
    function API_UNAVAILABLE(macosx)_: CGSize hostedViewMaximumAllowedSize ); message 'API_UNAVAILABLE(macosx)';
  end;
{$endif}

