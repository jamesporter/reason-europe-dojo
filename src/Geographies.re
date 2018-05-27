[@bs.deriving abstract]
type geographiesProps = {className: string};

[@bs.module "react-simple-maps"]
external geographies : ReasonReact.reactClass = "Geographies";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographies,
    ~props=Js.Obj.empty(),
    children,
  );
  