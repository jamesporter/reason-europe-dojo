[@bs.deriving abstract]
type composableMapProps = {className: string};

[@bs.module "react-simple-maps"]
external composableMap : ReasonReact.reactClass = "ComposableMap";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=composableMap,
    ~props=Js.Obj.empty(),
    children,
  );